<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <title>CHARLES | Music</title>

    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }

        body {
            background: #080808;
            color: white;
            font-family: Arial, sans-serif;
        }

        nav {
            display: flex;
            justify-content: space-between;
            align-items: center;
            padding: 30px 8%;
        }

        nav h2 {
            color: #39ff14;
            letter-spacing: 5px;
        }

        nav a {
            color: white;
            text-decoration: none;
            margin-left: 20px;
        }

        nav a:hover {
            color: #39ff14;
        }

        .heading {
            text-align: center;
            padding: 80px 20px;
        }

        .heading h1 {
            font-size: clamp(50px, 10vw, 100px);
            color: #39ff14;
            letter-spacing: 10px;
        }

        .heading p {
            color: #999;
            margin-top: 20px;
        }

        .songs {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(250px, 350px));
            justify-content: center;
            gap: 40px;
            padding: 40px 8% 100px;
        }

        .song {
            background: #151515;
            padding: 20px;
            border-radius: 12px;
            text-align: center;
        }

        .song img {
            width: 100%;
            border-radius: 8px;
            margin-bottom: 20px;
        }

        .song h2 {
            color: #faff00;
            margin-bottom: 15px;
        }

        .song audio {
            width: 100%;
        }

        footer {
            text-align: center;
            padding: 30px;
            color: #faff00;
            border-top: 1px solid #222;
        }
    </style>
</head>

<body>

    <nav>
        <h2>CHARLES.</h2>

        <div>
            <a href="index.html">HOME</a>
            <a href="music.html">MUSIC</a>
        </div>
    </nav>

    <section class="heading">
        <h1>MY MUSIC</h1>
        <p>My music. My emotions. My stories.</p>
    </section>

    <section class="songs">

        <!-- FIRST SONG -->

        <div class="song">

            <img src="./2_20261007_143104_0001.png"
                 alt="First song cover">

            <h2>MY FIRST TRACK</h2>

            <audio controls preload="metadata">
                <source src="./my%20songs/song1.mp3.wav"
                        type="audio/wav">
                Your browser does not support audio.
            </audio>

        </div>

    </section>

    <footer>
        © 2026 CHARLES. ALL RIGHTS RESERVED.
    </footer>

</body>
</html>
