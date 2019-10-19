//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingContent-Protocol.h"

@class FBSDKCameraEffectArguments, FBSDKCameraEffectTextures, FBSDKHashtag, NSArray, NSString, NSURL;

@interface FBSDKShareCameraEffectContent : NSObject <FBSDKSharingContent>
{
    NSString *_effectID;
    FBSDKCameraEffectArguments *_effectArguments;
    FBSDKCameraEffectTextures *_effectTextures;
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    NSString *_pageID;
    NSString *_shareUUID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
@property(copy, nonatomic) FBSDKCameraEffectTextures *effectTextures; // @synthesize effectTextures=_effectTextures;
@property(copy, nonatomic) FBSDKCameraEffectArguments *effectArguments; // @synthesize effectArguments=_effectArguments;
@property(copy, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToShareCameraEffectContent:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

