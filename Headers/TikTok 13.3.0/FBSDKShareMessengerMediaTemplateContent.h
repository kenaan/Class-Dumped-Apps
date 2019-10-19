//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKSharingContent-Protocol.h"

@class FBSDKHashtag, NSArray, NSString, NSURL;
@protocol FBSDKShareMessengerActionButton;

@interface FBSDKShareMessengerMediaTemplateContent : NSObject <FBSDKSharingContent>
{
    NSURL *_contentURL;
    FBSDKHashtag *_hashtag;
    NSArray *_peopleIDs;
    NSString *_placeID;
    NSString *_ref;
    NSString *_pageID;
    NSString *_shareUUID;
    unsigned long long _mediaType;
    NSString *_attachmentID;
    NSURL *_mediaURL;
    id <FBSDKShareMessengerActionButton> _button;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) id <FBSDKShareMessengerActionButton> button; // @synthesize button=_button;
@property(readonly, copy, nonatomic) NSURL *mediaURL; // @synthesize mediaURL=_mediaURL;
@property(readonly, copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *shareUUID; // @synthesize shareUUID=_shareUUID;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(copy, nonatomic) NSString *ref; // @synthesize ref=_ref;
@property(copy, nonatomic) NSString *placeID; // @synthesize placeID=_placeID;
@property(copy, nonatomic) NSArray *peopleIDs; // @synthesize peopleIDs=_peopleIDs;
@property(copy, nonatomic) FBSDKHashtag *hashtag; // @synthesize hashtag=_hashtag;
@property(copy, nonatomic) NSURL *contentURL; // @synthesize contentURL=_contentURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaURL:(id)arg1;
- (id)initWithAttachmentID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

