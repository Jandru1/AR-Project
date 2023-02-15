using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARPlacement : MonoBehaviour
{
    private GameObject arObjectToSpawn;
    public GameObject placementIndicator;
    private GameObject spawnedObject;
    private Pose PlacementPose;
    private ARRaycastManager aRRaycastManager;
    private bool placementPoseIsValid = false;

    public GameObject FantasmaLila;
    public GameObject FantasmaVerde;
    public GameObject FantasmaMarron;
    public GameObject FantasmaBlanco;

    public Camera Cam;

    private float initialDistance;
    private Vector3 initialScale;

    void Start()
    {
        aRRaycastManager = FindObjectOfType<ARRaycastManager>();
    }

    // Actualizar posicion
    void Update()
    {
        if(!spawnedObject && placementPoseIsValid)// && Input.touchCount > 0 && Input.GetTouch(0).phase ==  TouchPhase.Began)
        {
            //PlaceObject();
        }
        Debug.Log("PlacementPose.rotation" + PlacementPose.rotation.x + PlacementPose.rotation.y + PlacementPose.rotation.z + PlacementPose.rotation.w);

        UpdatePlacementPose(); //Pos Valida (mesa)
        UpdatePlacementIndicator();  //Indicador
    }

    void UpdatePlacementIndicator()
    {
        if (!spawnedObject && placementPoseIsValid)
        {
            placementIndicator.SetActive(true);
            placementIndicator.transform.SetPositionAndRotation(PlacementPose.position, PlacementPose.rotation);
        }
        else
        {
            placementIndicator.SetActive(false);
        }
    }

    void UpdatePlacementPose()
    {
        Vector3 screenCenter = Cam.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));
        var hits = new List<ARRaycastHit>();
        aRRaycastManager.Raycast(screenCenter, hits, TrackableType.Planes);

        placementPoseIsValid = hits.Count > 0;
        if (placementPoseIsValid)
        {
            PlacementPose = hits[0].pose;
            //PlacementPose.rotation.y += 180f;
        }
    }

    void PlaceObject()
    {
        Vector4 v = PlacementPose.rotation.eulerAngles;// new Vector4(PlacementPose.rotation.x, PlacementPose.rotation.y, PlacementPose.rotation.z, PlacementPose.rotation.w);
        v.y += 180;
        spawnedObject = Instantiate(arObjectToSpawn, PlacementPose.position, Quaternion.Euler(v));
        spawnedObject = null;
    }

    void SetObjectToPlace(GameObject objToPlace)
    {
        arObjectToSpawn = objToPlace;

        arObjectToSpawn.transform.Rotate(180f, 180f, 180f, Space.World);
    }

    public void ColocarLila()
    {
        if (placementPoseIsValid)
        {
            SetObjectToPlace(FantasmaLila);
            PlaceObject();
        }
    }

    public void ColocarVerde()
    {
        if (placementPoseIsValid)
        {
            SetObjectToPlace(FantasmaVerde);
            PlaceObject();
        }
    }

    public void ColocarMarron()
    {
        if (placementPoseIsValid)
        {
            SetObjectToPlace(FantasmaMarron);
            PlaceObject();
        }
    }

    public void ColocarBlanco()
    {
        if (placementPoseIsValid)
        {
            SetObjectToPlace(FantasmaBlanco);
            PlaceObject();
        }
    }
}