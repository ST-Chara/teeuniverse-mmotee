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

#include <generated/assets/guitabsstyle.h>
#include <shared/assets/assetssaveloadcontext.h>
#include <shared/archivefile.h>

CAsset_GuiTabsStyle::CAsset_GuiTabsStyle()
{
	m_ButtonListFill = false;
	m_ButtonListText = false;
}

void CAsset_GuiTabsStyle::CTuaType_0_2_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_0& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_2_0::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_2_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_2_0& TuaType)
{
	CAsset::CTuaType_0_2_0::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

void CAsset_GuiTabsStyle::CTuaType_0_2_1::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_1& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_2_1::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_2_1::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_2_1& TuaType)
{
	CAsset::CTuaType_0_2_1::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

void CAsset_GuiTabsStyle::CTuaType_0_2_2::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_2& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_2_2::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_2_2::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_2_2& TuaType)
{
	CAsset::CTuaType_0_2_2::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

void CAsset_GuiTabsStyle::CTuaType_0_2_3::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_3& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_2_3::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_2_3::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_2_3& TuaType)
{
	CAsset::CTuaType_0_2_3::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

void CAsset_GuiTabsStyle::CTuaType_0_2_4::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_2_4& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_2_4::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_2_4::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_2_4& TuaType)
{
	CAsset::CTuaType_0_2_4::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

void CAsset_GuiTabsStyle::CTuaType_0_3_0::Read(CAssetsSaveLoadContext* pLoadingContext, const CTuaType_0_3_0& TuaType, CAsset_GuiTabsStyle& SysType)
{
	CAsset::CTuaType_0_3_0::Read(pLoadingContext, TuaType, SysType);

	pLoadingContext->ReadAssetPath(TuaType.m_LayoutPath, SysType.m_LayoutPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ContentPath, SysType.m_ContentPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ButtonListPath, SysType.m_ButtonListPath);
	pLoadingContext->ReadAssetPath(TuaType.m_InactiveButtonPath, SysType.m_InactiveButtonPath);
	pLoadingContext->ReadAssetPath(TuaType.m_ActiveButtonPath, SysType.m_ActiveButtonPath);
	SysType.m_ButtonListFill = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListFill);
	SysType.m_ButtonListText = pLoadingContext->ArchiveFile()->ReadBool(TuaType.m_ButtonListText);
}


void CAsset_GuiTabsStyle::CTuaType_0_3_0::Write(CAssetsSaveLoadContext* pLoadingContext, const CAsset_GuiTabsStyle& SysType, CTuaType_0_3_0& TuaType)
{
	CAsset::CTuaType_0_3_0::Write(pLoadingContext, SysType, TuaType);

	pLoadingContext->WriteAssetPath(SysType.m_LayoutPath, TuaType.m_LayoutPath);
	pLoadingContext->WriteAssetPath(SysType.m_ContentPath, TuaType.m_ContentPath);
	pLoadingContext->WriteAssetPath(SysType.m_ButtonListPath, TuaType.m_ButtonListPath);
	pLoadingContext->WriteAssetPath(SysType.m_InactiveButtonPath, TuaType.m_InactiveButtonPath);
	pLoadingContext->WriteAssetPath(SysType.m_ActiveButtonPath, TuaType.m_ActiveButtonPath);
	TuaType.m_ButtonListFill = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListFill);
	TuaType.m_ButtonListText = pLoadingContext->ArchiveFile()->WriteBool(SysType.m_ButtonListText);
}

template<>
bool CAsset_GuiTabsStyle::GetValue(int ValueType, const CSubPath& SubPath, bool DefaultValue) const
{
	switch(ValueType)
	{
		case BUTTONLISTFILL:
			return GetButtonListFill();
		case BUTTONLISTTEXT:
			return GetButtonListText();
	}
	return CAsset::GetValue<bool>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiTabsStyle::SetValue(int ValueType, const CSubPath& SubPath, bool Value)
{
	switch(ValueType)
	{
		case BUTTONLISTFILL:
			SetButtonListFill(Value);
			return true;
		case BUTTONLISTTEXT:
			SetButtonListText(Value);
			return true;
	}
	return CAsset::SetValue<bool>(ValueType, SubPath, Value);
}

template<>
CAssetPath CAsset_GuiTabsStyle::GetValue(int ValueType, const CSubPath& SubPath, CAssetPath DefaultValue) const
{
	switch(ValueType)
	{
		case LAYOUTPATH:
			return GetLayoutPath();
		case CONTENTPATH:
			return GetContentPath();
		case BUTTONLISTPATH:
			return GetButtonListPath();
		case INACTIVEBUTTONPATH:
			return GetInactiveButtonPath();
		case ACTIVEBUTTONPATH:
			return GetActiveButtonPath();
	}
	return CAsset::GetValue<CAssetPath>(ValueType, SubPath, DefaultValue);
}

template<>
bool CAsset_GuiTabsStyle::SetValue(int ValueType, const CSubPath& SubPath, CAssetPath Value)
{
	switch(ValueType)
	{
		case LAYOUTPATH:
			SetLayoutPath(Value);
			return true;
		case CONTENTPATH:
			SetContentPath(Value);
			return true;
		case BUTTONLISTPATH:
			SetButtonListPath(Value);
			return true;
		case INACTIVEBUTTONPATH:
			SetInactiveButtonPath(Value);
			return true;
		case ACTIVEBUTTONPATH:
			SetActiveButtonPath(Value);
			return true;
	}
	return CAsset::SetValue<CAssetPath>(ValueType, SubPath, Value);
}

int CAsset_GuiTabsStyle::AddSubItem(int Type, const CSubPath& SubPath)
{
	return -1;
}

int CAsset_GuiTabsStyle::AddSubItemAt(int Type, const CSubPath& SubPath, int Index)
{
	return -1;
}

void CAsset_GuiTabsStyle::DeleteSubItem(const CSubPath& SubPath)
{
}

void CAsset_GuiTabsStyle::RelMoveSubItem(CSubPath& SubPath, int RelMove)
{
}

