attribute vec3 vPosition;
varying vec4 color;

void
main()
{
    color = vec4( 0.5 + vPosition.x, 0.5 + vPosition.y, 0.5 + vPosition.z, 1.0 );
    gl_Position = vec4(vPosition, 1.0);
}
