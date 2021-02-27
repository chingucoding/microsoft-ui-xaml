// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class NavigationViewItemPresenterProperties
{
public:
    NavigationViewItemPresenterProperties();

    void Icon(winrt::IconElement const& value);
    winrt::IconElement Icon();

    void TemplateSettings(winrt::NavigationViewItemPresenterTemplateSettings const& value);
    winrt::NavigationViewItemPresenterTemplateSettings TemplateSettings();

    static winrt::DependencyProperty IconProperty() { return s_IconProperty; }
    static winrt::DependencyProperty TemplateSettingsProperty() { return s_TemplateSettingsProperty; }

    static GlobalDependencyProperty s_IconProperty;
    static GlobalDependencyProperty s_TemplateSettingsProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
