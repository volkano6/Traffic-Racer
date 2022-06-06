
<head>
</head>

<body>
  <h1> Traffic Racer</h1>
  <br>
  <h3>ABSTRACT</h3>
  <p>In the category of infinite arcade racing, Traffic Racer is a classic.
     Traffic Racer is a cross between an endless runner and a regular racing
      game. Hence, we combined these using Unity in the 3D environment. 
      This report aims to show the methods used to construct the game, 
      explain the 3D Unity environment, explain them in-depth, and highlight
       the project's achievements.
  </p>
  <h3>1.DESCRIPTION OF THE PROJECT </h3>
  <p>In this project, the Traffic Racer, which is a popular and well-known
     game, is programmed using Unity in the 3D platform. The game Traffic 
     Racer is a combination of an endless runner and a typical racing game. 
     As traffic builds up, users bob and weave through it, traveling as far 
     as they can before colliding with another vehicle. This usually takes 
     the shape of a head-on collision with other vehicles in the traffic. 
  </p>
  <h3>2.DESCRIPTION OF THE SOLUTION</h3>
  <h4>2.1. General Explanation</h4>
  <p>	In the solution of the project, our major features are an endless road,
     the main vehicle, and  random vehicles.
  </p>
  <h5>2.1.1.Main vehicle:</h5>
  <p>The main vehicle is created by using a car asset from the asset store
     in unity.
  </p>
  <h5>2.1.2.Endless road:</h5>
  <p>Firstly, a 3D Game object is created in Unity for the base of the road.
     Secondly, the width and length of the road are adjusted. 
     Thirdly, the road image from an asset is attached to the road object to
      catch the real-like road view. Endless road is regulated by using only
       one road that we created. The main road is copied continuously, 
       while our main vehicle passes a certain point of the road, the rest 
       of the road is deleted. An endless road is obtained by using these 
       steps.</p>
  <h5>2.1.3.Random vehicles:</h5>
  <p>Several vehicles are created by using an asset from the asset store in Unity. These vehicles appear randomly on the road that our main vehicle drives. The purpose of these vehicles appearing randomly is to provide the collision of the main vehicle.
    Additionally, several assets are used to catch the real-like road view. 
  <br>  
    Examples:
    <br>  
  Barriers to the sides of the road
    <br>  
  Soil ground and trees on the right and left sides of the road
  </p>

  <h4>2.2. Scenes</h4>
  
  <h5>2.2.1.Game menu scene:</h5>
  <p>
    The scene that is the game played.
  </p>
  
  <h5>2.2.2.Main menu scene:</h5>
  <p>
  The scene is the main menu to start the game, quit the game, or choose the car that is wanted to use as the main car.

  </p>
  <h5>2.2.3.Game over menu scene:</h5>
  <p>
   The scene appears when the car collide to another car. Score, main menu, and quit buttons can be clicked in this scene.

  </p>


  <h3> EXAMPLES OF OUTPUT </h3>

</body>

</html>
