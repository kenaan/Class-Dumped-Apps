//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBoltUploadObject, NSString;

@interface IMPHighlightSnap : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) IMPBoltUploadObject *boltUploadObject; // @dynamic boltUploadObject;
@property(copy, nonatomic) NSString *highlightSnapId; // @dynamic highlightSnapId;
@property(copy, nonatomic) NSString *profileStorySnapId; // @dynamic profileStorySnapId;
@property(readonly, nonatomic) int snapContentOneOfCase; // @dynamic snapContentOneOfCase;

@end

