//
//  ActivitiesRequest.swift
//  CreatubblesAPIClient
//
//  Created by Dawid Płatek on 22.07.2016.
//  Copyright © 2016 Nomtek. All rights reserved.
//

import UIKit

class ActivitiesRequest: Request {
    
    override var method: RequestMethod  { return .GET }
    override var endpoint: String       { return "activities" }
    override var parameters: Dictionary<String, AnyObject> { return prepareParameters() }
    
    private let page: Int?
    private let perPage: Int?
    
    init(page: Int?, perPage: Int?) {
        self.page = page
        self.perPage = perPage
    }
    
    private func prepareParameters() -> Dictionary<String,AnyObject> {
        var params = Dictionary<String,AnyObject>()
        if let page = page {
            params["page"] = page
        }
        
        if let perPage = perPage {
            params["per_page"] = perPage
        }
        
        return params
    }
}
