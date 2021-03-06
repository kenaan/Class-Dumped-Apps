//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCNetworkImage, UIImage;

@interface SCProfileCharmsCardViewCellContentViewModel : NSObject <NSCopying>
{
    _Bool _isRemoteBitmojiSelfie;
    UIImage *_loadingImage;
    SCNetworkImage *_staticImage;
    SCNetworkImage *_bitmojiImage;
}

@property(readonly, copy, nonatomic) SCNetworkImage *bitmojiImage; // @synthesize bitmojiImage=_bitmojiImage;
@property(readonly, nonatomic) _Bool isRemoteBitmojiSelfie; // @synthesize isRemoteBitmojiSelfie=_isRemoteBitmojiSelfie;
@property(readonly, copy, nonatomic) SCNetworkImage *staticImage; // @synthesize staticImage=_staticImage;
@property(readonly, copy, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLoadingImage:(id)arg1 staticImage:(id)arg2 isRemoteBitmojiSelfie:(_Bool)arg3 bitmojiImage:(id)arg4;

@end

