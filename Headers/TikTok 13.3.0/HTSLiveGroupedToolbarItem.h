//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveToolbarItem.h"

@class NSArray;

@interface HTSLiveGroupedToolbarItem : HTSLiveToolbarItem
{
    NSArray *_groupedItems;
    long long _style;
    long long _groupMode;
}

@property(nonatomic) long long groupMode; // @synthesize groupMode=_groupMode;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *groupedItems; // @synthesize groupedItems=_groupedItems;
- (void).cxx_destruct;
- (id)init;

@end

