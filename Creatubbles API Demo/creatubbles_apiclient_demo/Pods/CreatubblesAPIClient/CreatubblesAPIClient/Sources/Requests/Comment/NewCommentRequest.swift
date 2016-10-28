//
//  NewCommentRequest.swift
//  CreatubblesAPIClient
//
//  Created by Nomtek on 17.03.2016.
//  Copyright © 2016 Nomtek. All rights reserved.
//

import UIKit

class NewCommentRequest: Request {

    
    override var method: RequestMethod  { return .POST }
    override var endpoint: String
    {
        switch data.type
        {
            case .Creation: return "creations/\(data.commentedObjectIdentifier)/comments"
            case .Gallery:  return "galleries/\(data.commentedObjectIdentifier)/comments"
            case .User:     return "users/\(data.commentedObjectIdentifier)/comments"
        }
    }
    override var parameters: Dictionary<String, AnyObject> { return prepareParameters() }
    
    private let data: NewCommentData
    
    init(data: NewCommentData)
    {
        self.data = data
    }
    
    private func prepareParameters() -> Dictionary<String,AnyObject>
    {
        var params = Dictionary<String,AnyObject>()        
        if let text = data.text
        {
            params["text"] = text
        }
        return params
    }
}