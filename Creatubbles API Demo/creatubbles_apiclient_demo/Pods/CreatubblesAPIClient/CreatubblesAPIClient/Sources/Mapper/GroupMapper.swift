//
//  GroupMapper.swift
//  CreatubblesAPIClient
//
//  Copyright (c) 2016 Creatubbles Pte. Ltd.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

import UIKit
import ObjectMapper

class GroupMapper: Mappable
{
    var identifier: String?
    var name: String?
    var slug: String?
    var creatorsCount: Int?
    var avatarUrl: String?
    var avatarCreationRelationship: RelationshipMapper?
    
    required init?(_ map: Map) { /* Intentionally left empty  */ }
    
    func mapping(map: Map)
    {
        identifier  <- map["id"]
        name <- map["attributes.name"]
        
        slug <- map["attributes.slug"]
        creatorsCount <- map["attributes.creators_count"]
        avatarUrl <- map["attributes.avatar_url"]
        avatarCreationRelationship <- map["relationships.avatar_creation.data"]
    }
}