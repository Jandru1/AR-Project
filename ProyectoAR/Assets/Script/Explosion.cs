using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour
{
    public GameObject explosion;
    GameObject scoreToSpawn;
    // public GameObject enemyToSpawn;
    // Vector3 killPos;
    // Quaternion killRot;
    public float waitTime = 3.0f;

    public GameObject PointsWhiteGameObject;
    public GameObject PointsBrownGameObject;
    public GameObject PointsGreenGameObject;
    public GameObject PointsVioletGameObject;

    public int VioletScore;
    public int GreenScore;
    public int WhiteScore;
    public int BrownScore;

    private void OnCollisionEnter(Collision collision)
    {
        string ColorFantasma = collision.transform.tag;
        if (ColorFantasma == "Ghost_Violet" || ColorFantasma == "Ghost_Green" || ColorFantasma == "Ghost_White" || ColorFantasma == "Ghost_Brown")
        {
            Destroy(collision.transform.gameObject);
            Scoring.score += WhichScore(ColorFantasma); 
            // killPos = collision.transform.position;
            // killRot = collision.transform.rotation;
            // StartCoroutine(ReSpawnEnemy());

            Destroy(Instantiate(explosion, collision.transform.position, collision.transform.rotation), waitTime);
            SetScoreToSpawn(ColorFantasma);

            //Aqui le doy vuelta 180 grados como a los fantasmas
            Vector4 v = collision.transform.rotation.eulerAngles;
            v.y += 180;
            Destroy(Instantiate(scoreToSpawn, collision.transform.position, Quaternion.Euler(v)), waitTime);
        }
    }

    int WhichScore(string color)
    {
        if (color == "Ghost_Violet") return VioletScore;
        else if (color == "Ghost_Green") return GreenScore;
        else if (color == "Ghost_White") return WhiteScore;
        else if (color == "Ghost_Brown") return BrownScore;
        return 1;
    }

    void SetScoreToSpawn(string color)
    {
        if (color == "Ghost_Violet") scoreToSpawn = PointsVioletGameObject;
        else if (color == "Ghost_Green") scoreToSpawn = PointsGreenGameObject;
        else if (color == "Ghost_White") scoreToSpawn = PointsWhiteGameObject;
        else if (color == "Ghost_Brown") scoreToSpawn = PointsBrownGameObject;
        return;
    }


    // IEnumerator ReSpawnEnemy()
    // {
    //     yield return new WaitForSeconds(waitTime);
    //     Instantiate(enemyToSpawn, killPos, killRot);
    // }

}
