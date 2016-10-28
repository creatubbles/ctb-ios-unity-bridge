struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 50 classes
	//0. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//4. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//5. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//6. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//7. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//8. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//11. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//12. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//13. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//14. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//15. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//16. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//17. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//18. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//19. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//20. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//23. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//24. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//25. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//26. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//27. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//28. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//29. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//30. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//31. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//32. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//33. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//34. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//35. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//36. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//37. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//38. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//39. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//40. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//41. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//42. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//43. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//44. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//45. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//46. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//47. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//48. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//49. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
