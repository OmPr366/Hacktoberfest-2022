//  write a javascript program to create a new string adding "Dassault" in front of a given string. If the given string begins with "Dassault" then return the given string.

function addDassault(str) {

    if (str.startsWith("Dassault")) {
        return str;
    } else {
        return "Dassault " + str;
    }

}
