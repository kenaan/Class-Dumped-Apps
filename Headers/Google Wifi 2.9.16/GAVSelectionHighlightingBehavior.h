//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVBehavior-Protocol.h"

@class NSMutableArray, NSString;
@protocol GAVChartCore;

@interface GAVSelectionHighlightingBehavior : NSObject <GAVBehavior>
{
    NSString *_name;
    id <GAVChartCore> _chart;
    NSMutableArray *_appliedStyles;
}

@property(retain, nonatomic) NSMutableArray *appliedStyles; // @synthesize appliedStyles=_appliedStyles;
@property(nonatomic) __weak id <GAVChartCore> chart; // @synthesize chart=_chart;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)highlightSeries:(id)arg1 withHighlighters:(id)arg2 selectorBlock:(CDUnknownBlockType)arg3;
- (void)onDrawWithNotification:(id)arg1;
- (void)detachFromChart:(id)arg1;
- (void)attachToChart:(id)arg1;
- (id)init;

@end
