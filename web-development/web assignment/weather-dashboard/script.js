const apiKey = "demo_key";

async function checkWeather(city) {
    const response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}`);
    var data = await response.json();

    console.log(data);

    // Update UI elements here
    // document.querySelector(".city").innerHTML = data.name;
    // document.querySelector(".temp").innerHTML = Math.round(data.main.temp) + "°C";
}

// checkWeather("New York");
