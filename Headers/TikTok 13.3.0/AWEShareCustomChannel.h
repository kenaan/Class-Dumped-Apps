//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEShareBaseChannel.h"

#import "AWEShareChannel-Protocol.h"

@class NSDictionary, NSString, UIImage;

@interface AWEShareCustomChannel : AWEShareBaseChannel <AWEShareChannel>
{
    NSString *_shareType;
    long long _shareCategory;
    NSString *_shareTitle;
    NSString *_trackingLabel;
    CDUnknownBlockType _shareHandler;
    CDUnknownBlockType _preparationHandler;
    UIImage *_shareImage;
    NSDictionary *_shareImages;
    CDUnknownBlockType _shareImageProvider;
}

@property(copy, nonatomic) CDUnknownBlockType shareImageProvider; // @synthesize shareImageProvider=_shareImageProvider;
@property(copy, nonatomic) NSDictionary *shareImages; // @synthesize shareImages=_shareImages;
@property(retain, nonatomic) UIImage *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(copy, nonatomic) CDUnknownBlockType shareHandler; // @synthesize shareHandler=_shareHandler;
@property(copy, nonatomic) NSString *trackingLabel; // @synthesize trackingLabel=_trackingLabel;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(readonly, nonatomic) long long shareCategory; // @synthesize shareCategory=_shareCategory;
@property(readonly, copy, nonatomic) NSString *shareType; // @synthesize shareType=_shareType;
- (void).cxx_destruct;
- (void)shareWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)prepareWithContext:(id)arg1 inView:(id)arg2;
- (id)shareImageForStyle:(unsigned long long)arg1;
- (id)initWithType:(id)arg1 category:(long long)arg2;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

