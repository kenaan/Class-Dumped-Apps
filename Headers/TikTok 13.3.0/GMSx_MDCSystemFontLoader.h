//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDCTypographyFontLoading-Protocol.h"

@class NSCache, NSString;

@interface GMSx_MDCSystemFontLoader : NSObject <MDCTypographyFontLoading>
{
    NSCache *_fontCache;
}

@property(retain, nonatomic) NSCache *fontCache; // @synthesize fontCache=_fontCache;
- (void).cxx_destruct;
- (_Bool)isLargeForContrastRatios:(id)arg1;
- (id)boldItalicFontOfSize:(double)arg1;
- (id)italicFontOfSize:(double)arg1;
- (id)boldFontOfSize:(double)arg1;
- (id)mediumFontOfSize:(double)arg1;
- (id)regularFontOfSize:(double)arg1;
- (id)lightFontOfSize:(double)arg1;
- (void)didChangeContentSizeCategory;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

