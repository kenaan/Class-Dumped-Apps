//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGRenderable.h"

@class NSString;

@interface RNSVGUse : RNSVGRenderable
{
    NSString *_href;
    NSString *_usewidth;
    NSString *_useheight;
}

@property(retain, nonatomic) NSString *useheight; // @synthesize useheight=_useheight;
@property(retain, nonatomic) NSString *usewidth; // @synthesize usewidth=_usewidth;
@property(retain, nonatomic) NSString *href; // @synthesize href=_href;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;

@end

