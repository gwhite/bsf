#pragma once

#include "BsEditorPrerequisites.h"
#include "BsGUIFieldBase.h"
#include "CmVector3.h"

namespace BansheeEngine
{
	class BS_ED_EXPORT GUIVector3Field : public TGUIField<GUIVector3Field>
	{
	public:
		static const String& getGUITypeName();

		GUIVector3Field(const PrivatelyConstruct& dummy, const GUIContent& labelContent, UINT32 labelWidth,
			const String& labelStyle, const String& inputBoxStyle, const GUILayoutOptions& layoutOptions, bool withLabel);

		Vector3 getValue() const;
		void setValue(const Vector3& value);

	protected:
		virtual ~GUIVector3Field() { }

	protected:
		static const UINT32 ELEMENT_LABEL_WIDTH;

		GUIFloatField* mFieldX;
		GUIFloatField* mFieldY;
		GUIFloatField* mFieldZ;
	};
}