IP="192.168.1.109"
TOPIC="images/weather"
USERNAME=$(cat /home/user/abzug-receiver/username)
PASSWORD=$(cat /home/user/abzug-receiver/passwd)

nix shell nixpkgs#mosquitto --command mosquitto_sub -h $IP -t $TOPIC -u $USERNAME -P $PASSWORD >"images/image.base64"
base64 -d "images/image.base64" >images/latest.png
