/*
 * Copyright (C) 2016 necropotame (necropotame@gmail.com)
 * 
 * This file is part of TeeUniverse.
 * 
 * TeeUniverse is free software: you can redistribute it and/or  modify
 * it under the terms of the GNU Affero General Public License, version 3,
 * as published by the Free Software Foundation.
 *
 * TeeUniverse is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with TeeUniverse.  If not, see <http://www.gnu.org/licenses/>.
 */

/*
 * THIS FILE HAS BEEN GENERATED BY A SCRIPT.
 * DO NOT EDIT MANUALLY!
 *
 * Please use the script "scripts/assets/assets.py" to regenerate it.
 *
 * Why this file is generated by a script?
 * Because there is more than 10 files that follow the same format.
 * In addition, each time a new member is added, enums, getter, setters,
 * copy/transfert functions and storage structure must be updated.
 * It's too much to avoid mistakes.
 */

#ifndef __CLIENT_ASSETS_SKELETON__
#define __CLIENT_ASSETS_SKELETON__

#include <shared/assets/asset.h>
#include <cassert>
#include <vector>
#include <shared/tl/algorithm.h>

class CAsset_Skeleton : public CAsset
{
public:
	static const int TypeId = 22;
	
	enum
	{
		TYPE_BONE,
		TYPE_LAYER,
	};
	
	static inline CSubPath SubPath_Bone(int Id0) { return CSubPath(TYPE_BONE, Id0, 0, 0); }
	static inline CSubPath SubPath_Layer(int Id0) { return CSubPath(TYPE_LAYER, Id0, 0, 0); }
	
	enum
	{
		NAME = CAsset::NAME,
		BONE_ARRAYSIZE,
		BONE_PTR,
		BONE_ARRAY,
		BONE_PARENT,
		BONE_LENGTH,
		BONE_ANCHOR,
		BONE_TRANSLATION,
		BONE_TRANSLATION_X,
		BONE_TRANSLATION_Y,
		BONE_ANGLE,
		BONE_NAME,
		BONE_COLOR,
		BONE,
		LAYER_ARRAYSIZE,
		LAYER_PTR,
		LAYER_ARRAY,
		LAYER_NAME,
		LAYER,
	};
	
	class CIteratorBone
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorBone() : m_Index(0), m_Reverse(false) {}
		CIteratorBone(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorBone& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Bone(m_Index); }
		bool operator==(const CIteratorBone& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorBone& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorBone BeginBone() const { return CIteratorBone(0, false); }
	CIteratorBone EndBone() const { return CIteratorBone(m_Bone.size(), false); }
	CIteratorBone ReverseBeginBone() const { return CIteratorBone(m_Bone.size()-1, true); }
	CIteratorBone ReverseEndBone() const { return CIteratorBone(-1, true); }
	
	class CIteratorLayer
	{
	protected:
		int m_Index;
		bool m_Reverse;
	public:
		CIteratorLayer() : m_Index(0), m_Reverse(false) {}
		CIteratorLayer(int Index, bool Reverse) : m_Index(Index), m_Reverse(Reverse) {}
		CIteratorLayer& operator++() { if(m_Reverse) m_Index--; else m_Index++; return *this; }
		CSubPath operator*() { return SubPath_Layer(m_Index); }
		bool operator==(const CIteratorLayer& Iter2) { return Iter2.m_Index == m_Index; }
		bool operator!=(const CIteratorLayer& Iter2) { return Iter2.m_Index != m_Index; }
	};
	
	CIteratorLayer BeginLayer() const { return CIteratorLayer(0, false); }
	CIteratorLayer EndLayer() const { return CIteratorLayer(m_Layer.size(), false); }
	CIteratorLayer ReverseBeginLayer() const { return CIteratorLayer(m_Layer.size()-1, true); }
	CIteratorLayer ReverseEndLayer() const { return CIteratorLayer(-1, true); }
	
	class CBone
	{
	public:
		class CTuaType_0_2_0
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_2_4& TuaType);
		};
		
		class CTuaType_0_3_0
		{
		public:
			CSubPath::CTuaType m_Parent;
			tua_float m_Length;
			tua_float m_Anchor;
			CTuaVec2 m_Translation;
			tua_float m_Angle;
			tua_stringid m_Name;
			tua_uint32 m_Color;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Skeleton::CBone& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CBone& SysType, CTuaType_0_3_0& TuaType);
		};
		
	
	private:
		CSubPath m_Parent;
		float m_Length;
		float m_Anchor;
		vec2 m_Translation;
		float m_Angle;
		_dynamic_string<128> m_Name;
		vec4 m_Color;
	
	public:
		CBone();
		inline CSubPath GetParent() const { return m_Parent; }
		
		inline float GetLength() const { return m_Length; }
		
		inline float GetAnchor() const { return m_Anchor; }
		
		inline vec2 GetTranslation() const { return m_Translation; }
		
		inline float GetTranslationX() const { return m_Translation.x; }
		
		inline float GetTranslationY() const { return m_Translation.y; }
		
		inline float GetAngle() const { return m_Angle; }
		
		inline const char* GetName() const { return m_Name.buffer(); }
		
		inline vec4 GetColor() const { return m_Color; }
		
		inline void SetParent(const CSubPath& Value) { m_Parent = Value; }
		
		inline void SetLength(float Value) { m_Length = Value; }
		
		inline void SetAnchor(float Value) { m_Anchor = Value; }
		
		inline void SetTranslation(vec2 Value) { m_Translation = Value; }
		
		inline void SetTranslationX(float Value) { m_Translation.x = Value; }
		
		inline void SetTranslationY(float Value) { m_Translation.y = Value; }
		
		inline void SetAngle(float Value) { m_Angle = Value; }
		
		inline void SetName(const char* Value) { m_Name = Value; }
		
		inline void SetColor(vec4 Value) { m_Color = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CLayer
	{
	public:
		class CTuaType_0_2_0
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_2_0& TuaType);
		};
		
		class CTuaType_0_2_1
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_2_1& TuaType);
		};
		
		class CTuaType_0_2_2
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_2_2& TuaType);
		};
		
		class CTuaType_0_2_3
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_2_3& TuaType);
		};
		
		class CTuaType_0_2_4
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_2_4& TuaType);
		};
		
		class CTuaType_0_3_0
		{
		public:
			tua_stringid m_Name;
			static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Skeleton::CLayer& SysType);
			static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton::CLayer& SysType, CTuaType_0_3_0& TuaType);
		};
		
	
	private:
		_dynamic_string<128> m_Name;
	
	public:
		inline const char* GetName() const { return m_Name.buffer(); }
		
		inline void SetName(const char* Value) { m_Name = Value; }
		
		void AssetPathOperation(const CAssetPath::COperation& Operation)
		{
		}
		
	};
	class CTuaType_0_2_0 : public CAsset::CTuaType_0_2_0
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_2_0& TuaType);
	};
	
	class CTuaType_0_2_1 : public CAsset::CTuaType_0_2_1
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_2_1& TuaType);
	};
	
	class CTuaType_0_2_2 : public CAsset::CTuaType_0_2_2
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_2_2& TuaType);
	};
	
	class CTuaType_0_2_3 : public CAsset::CTuaType_0_2_3
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_2_3& TuaType);
	};
	
	class CTuaType_0_2_4 : public CAsset::CTuaType_0_2_4
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_2_4& TuaType);
	};
	
	class CTuaType_0_3_0 : public CAsset::CTuaType_0_3_0
	{
	public:
		CTuaArray m_Bone;
		CTuaArray m_Layer;
		static void Read(class CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_Skeleton& SysType);
		static void Write(class CAssetsSaveLoadContext* pLoadingContext, const CAsset_Skeleton& SysType, CTuaType_0_3_0& TuaType);
	};
	

private:
	std::vector<CAsset_Skeleton::CBone> m_Bone;
	std::vector<CAsset_Skeleton::CLayer> m_Layer;

public:
	virtual ~CAsset_Skeleton() {}
	
	template<typename T>
	T GetValue(int ValueType, const CSubPath& SubPath, T DefaultValue) const
	{
		return CAsset::GetValue<T>(ValueType, SubPath, DefaultValue);
	}
	
	template<typename T>
	bool SetValue(int ValueType, const CSubPath& SubPath, T Value)
	{
		return CAsset::SetValue<T>(ValueType, SubPath, Value);
	}
	
	int AddSubItem(int Type, const CSubPath& SubPath);
	
	int AddSubItemAt(int Type, const CSubPath& SubPath, int Index);
	
	void DeleteSubItem(const CSubPath& SubPath);
	
	void RelMoveSubItem(CSubPath& SubPath, int RelMove);
	
	inline int GetBoneArraySize() const { return m_Bone.size(); }
	
	inline const CAsset_Skeleton::CBone* GetBonePtr() const { return &(m_Bone.front()); }
	
	inline const std::vector<CAsset_Skeleton::CBone>& GetBoneArray() const { return m_Bone; }
	inline std::vector<CAsset_Skeleton::CBone>& GetBoneArray() { return m_Bone; }
	
	inline const CAsset_Skeleton::CBone& GetBone(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Bone.size());
		{
			return m_Bone[SubPath.GetId()];
		}
	}
	
	inline CSubPath GetBoneParent(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetParent();
		else return CSubPath::Null();
	}
	
	inline float GetBoneLength(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetLength();
		else return 0.0f;
	}
	
	inline float GetBoneAnchor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetAnchor();
		else return 0.0f;
	}
	
	inline vec2 GetBoneTranslation(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetTranslation();
		else return 0.0f;
	}
	
	inline float GetBoneTranslationX(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetTranslationX();
		else return 0.0f;
	}
	
	inline float GetBoneTranslationY(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetTranslationY();
		else return 0.0f;
	}
	
	inline float GetBoneAngle(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetAngle();
		else return 0.0f;
	}
	
	inline const char* GetBoneName(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetName();
		else return NULL;
	}
	
	inline vec4 GetBoneColor(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Bone.size())
			return m_Bone[SubPath.GetId()].GetColor();
		else return 1.0f;
	}
	
	inline int GetLayerArraySize() const { return m_Layer.size(); }
	
	inline const CAsset_Skeleton::CLayer* GetLayerPtr() const { return &(m_Layer.front()); }
	
	inline const std::vector<CAsset_Skeleton::CLayer>& GetLayerArray() const { return m_Layer; }
	inline std::vector<CAsset_Skeleton::CLayer>& GetLayerArray() { return m_Layer; }
	
	inline const CAsset_Skeleton::CLayer& GetLayer(const CSubPath& SubPath) const
	{
		assert(SubPath.GetId() < m_Layer.size());
		{
			return m_Layer[SubPath.GetId()];
		}
	}
	
	inline const char* GetLayerName(const CSubPath& SubPath) const
	{
		if(SubPath.GetId() < m_Layer.size())
			return m_Layer[SubPath.GetId()].GetName();
		else return NULL;
	}
	
	inline void SetBoneArraySize(int Value) { m_Bone.resize(Value); }
	
	inline void SetBone(const CSubPath& SubPath, const CAsset_Skeleton::CBone& Value)
	{
		if(SubPath.GetId() < m_Bone.size())
		{
			m_Bone[SubPath.GetId()] = Value;
		}
	}
	
	inline void SetBoneParent(const CSubPath& SubPath, const CSubPath& Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetParent(Value);
	}
	
	inline void SetBoneLength(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetLength(Value);
	}
	
	inline void SetBoneAnchor(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetAnchor(Value);
	}
	
	inline void SetBoneTranslation(const CSubPath& SubPath, vec2 Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetTranslation(Value);
	}
	
	inline void SetBoneTranslationX(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetTranslationX(Value);
	}
	
	inline void SetBoneTranslationY(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetTranslationY(Value);
	}
	
	inline void SetBoneAngle(const CSubPath& SubPath, float Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetAngle(Value);
	}
	
	inline void SetBoneName(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetName(Value);
	}
	
	inline void SetBoneColor(const CSubPath& SubPath, vec4 Value)
	{
		if(SubPath.GetId() < m_Bone.size())
			m_Bone[SubPath.GetId()].SetColor(Value);
	}
	
	inline void SetLayerArraySize(int Value) { m_Layer.resize(Value); }
	
	inline void SetLayer(const CSubPath& SubPath, const CAsset_Skeleton::CLayer& Value)
	{
		if(SubPath.GetId() < m_Layer.size())
		{
			m_Layer[SubPath.GetId()] = Value;
		}
	}
	
	inline void SetLayerName(const CSubPath& SubPath, const char* Value)
	{
		if(SubPath.GetId() < m_Layer.size())
			m_Layer[SubPath.GetId()].SetName(Value);
	}
	
	inline int AddBone()
	{
		int Id = m_Bone.size();
		m_Bone.emplace_back();
		return Id;
	}
	
	inline int AddLayer()
	{
		int Id = m_Layer.size();
		m_Layer.emplace_back();
		return Id;
	}
	
	inline void AddAtBone(int Index) { m_Bone.insert(m_Bone.begin() + Index, CAsset_Skeleton::CBone()); }
	
	inline void AddAtLayer(int Index) { m_Layer.insert(m_Layer.begin() + Index, CAsset_Skeleton::CLayer()); }
	
	inline void DeleteBone(const CSubPath& SubPath) { m_Bone.erase(m_Bone.begin() + SubPath.GetId()); }
	
	inline void DeleteLayer(const CSubPath& SubPath) { m_Layer.erase(m_Layer.begin() + SubPath.GetId()); }
	
	inline void RelMoveBone(CSubPath& SubPath, int RelMove)
	{
		int NewId = relative_move(m_Bone, SubPath.GetId(), RelMove);
		SubPath.SetId(NewId);
	}
	
	inline void RelMoveLayer(CSubPath& SubPath, int RelMove)
	{
		int NewId = relative_move(m_Layer, SubPath.GetId(), RelMove);
		SubPath.SetId(NewId);
	}
	
	inline bool IsValidBone(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Bone.size()); }
	
	inline bool IsValidLayer(const CSubPath& SubPath) const { return (SubPath.IsNotNull() && SubPath.GetId() < m_Layer.size()); }
	
	void AssetPathOperation(const CAssetPath::COperation& Operation)
	{
		for(unsigned int i=0; i<m_Bone.size(); i++)
		{
			m_Bone[i].AssetPathOperation(Operation);
		}
		for(unsigned int i=0; i<m_Layer.size(); i++)
		{
			m_Layer[i].AssetPathOperation(Operation);
		}
	}
	
};

template<> int CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, int DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, int Value);
template<> const char* CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, const char* DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, const char* Value);
template<> float CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, float DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, float Value);
template<> vec2 CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, vec2 DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, vec2 Value);
template<> vec4 CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, vec4 DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, vec4 Value);
template<> CSubPath CAsset_Skeleton::GetValue(int ValueType, const CSubPath& SubPath, CSubPath DefaultValue) const;
template<> bool CAsset_Skeleton::SetValue(int ValueType, const CSubPath& SubPath, CSubPath Value);

#endif