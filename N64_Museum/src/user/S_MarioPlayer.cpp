#include "script/userScript.h"
#include "scene/sceneManager.h"
#include "scene/components/animModel.h" // Asegúrate de incluir esto

namespace P64::Script::CFD61E1845403ACF
{
  P64_DATA(
    Comp::AnimModel *MarioModel;
  );

  void init(Object& obj, Data *data)
  {
    // Buscamos el componente en el objeto
    data->MarioModel = obj.getComponent<Comp::AnimModel>();

    if(data->MarioModel) {
      // 0 es usualmente la primera animación que "pusheaste" en Blender NLA
      data->MarioModel->setMainAnim(0); 
    }
  }

  void update(Object& obj, Data *data, float deltaTime)
    {
        // Aquí podrías cambiar de animación según el movimiento
        // if (moviéndose) data->MarioModel->setMainAnim(1);
    }


  void destroy(Object& obj, Data *data)
  {
    // clean-up, this is called when the object gets deleted
  }


  void draw(Object& obj, Data *data, float deltaTime)
  {
    // this is called once every frame, and for every active camera.
    // Put your drawing code here
  }

  void onEvent(Object& obj, Data *data, const ObjectEvent &event)
  {
    // generic events an object can receive
    switch(event.type)
    {
      case EVENT_TYPE_ENABLE: // object got enabled
      break;
      case EVENT_TYPE_DISABLE: // object got disabled
      break;

      // you can check for your own custom types here too
    }
  }

  void onCollision(Object& obj, Data *data, const Coll::CollEvent& event)
  {
    // collision callbacks, only used if any collider is attached
  }
}
