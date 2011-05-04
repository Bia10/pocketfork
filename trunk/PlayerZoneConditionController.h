//
//  ZoneConditionController.h
//  Pocket Gnome
//
//  Created by Josh on 1/13/10.
//  Copyright 2010 Savory Software, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "ConditionController.h"

@class BetterSegmentedControl;

@interface PlayerZoneConditionController : ConditionController {
    IBOutlet BetterSegmentedControl *comparatorSegment;
	IBOutlet BetterSegmentedControl *typeSegment;
    IBOutlet NSTextField *quantityText;
}

@end
