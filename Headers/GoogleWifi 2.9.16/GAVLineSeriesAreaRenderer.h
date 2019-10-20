//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIBezierPath;
@protocol GAVAreaStyle;

@interface GAVLineSeriesAreaRenderer : NSObject
{
    NSMutableArray *_objects;
    UIBezierPath *_path;
    NSMutableArray *_reverseBaseline;
    NSMutableArray *_selectionDetails;
    id <GAVAreaStyle> _style;
}

@property(retain, nonatomic) id <GAVAreaStyle> style; // @synthesize style=_style;
@property(copy, nonatomic) NSMutableArray *selectionDetails; // @synthesize selectionDetails=_selectionDetails;
@property(retain, nonatomic) NSMutableArray *reverseBaseline; // @synthesize reverseBaseline=_reverseBaseline;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSMutableArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)renderSegment;
- (void)addPoint:(struct CGPoint)arg1 baseline:(double)arg2 style:(id)arg3 selectionDetails:(id)arg4;
- (id)init;

@end
