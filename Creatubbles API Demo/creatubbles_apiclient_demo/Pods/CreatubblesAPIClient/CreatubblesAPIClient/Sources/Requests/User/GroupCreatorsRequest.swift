//
//  GroupCreatorsRequest.swift
//  CreatubblesAPIClient
//
//  Created by Dawid Płatek on 03.08.2016.
//  Copyright © 2016 Nomtek. All rights reserved.
//

import UIKit

class GroupCreatorsRequest: Request {
    override var method: RequestMethod  { return .GET }
    override var endpoint: String       { return "groups/\(groupId)/creators" }
    override var parameters: Dictionary<String, AnyObject> { return prepareParameters() }
    
    private let groupId: String
    private let page: Int?
    private let perPage: Int?
    
    init(groupId: String, page: Int? = nil, perPage: Int? = nil) {
        self.groupId = groupId
        self.page = page
        self.perPage = perPage
    }
    
    private func prepareParameters() -> Dictionary<String, AnyObject> {
        var params = Dictionary<String, AnyObject>()
        
        if let page = page {
            params["page"] = page
        }
        
        if let perPage = perPage {
            params["per_page"] = perPage
        }
        
        return params
    }
    
}