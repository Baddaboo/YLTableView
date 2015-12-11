//
//  YLTableViewCellConformsToProtocol.h
//  YLTableView
//
//  Created by Ushhud Khalid on 12/9/15.
//  Copyright © 2015 Yelp. All rights reserved.
//

#import "YLTableViewCell.h"
#import "YLTableViewCellEstimatedRowHeight.h"

//! YLTableViewCell stub used for testing purposes. Take note that this conforms to the YLTableViewCellEstimatedRowHeight protocol.
@interface YLTableViewCellTestStub : YLTableViewCell <YLTableViewCellEstimatedRowHeight>

//! The height returned by calling estimatedRowHeight on this cell
extern const CGFloat kYLTableViewCellStubHeight;

@end
