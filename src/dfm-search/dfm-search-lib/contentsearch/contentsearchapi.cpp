// SPDX-FileCopyrightText: 2025 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later
#include <dfm-search/contentsearchapi.h>

DFM_SEARCH_BEGIN_NS

ContentOptionsAPI::ContentOptionsAPI(SearchOptions &options)
    : m_options(options)
{
}

void ContentOptionsAPI::setFileTypeFilters(const QStringList &extensions)
{
    m_options.setCustomOption("fileTypeFilters", extensions);
}

QStringList ContentOptionsAPI::fileTypeFilters() const
{
    return m_options.customOption("fileTypeFilters").toStringList();
}

void ContentOptionsAPI::setMaxPreviewLength(int length)
{
    m_options.setCustomOption("maxPreviewLength", length);
}

int ContentOptionsAPI::maxPreviewLength() const
{
    return m_options.customOption("maxPreviewLength").toInt();
}

ContentResultAPI::ContentResultAPI(SearchResult &result)
    : m_result(result)
{
}

QString ContentResultAPI::highlightedContent() const
{
    return m_result.customAttribute("highlightedContent").toString();
}

void ContentResultAPI::setHighlightedContent(const QString &content)
{
    m_result.setCustomAttribute("highlightedContent", content);
}

DFM_SEARCH_END_NS
