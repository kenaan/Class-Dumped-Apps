//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMImageSemanticRestrictions;

@interface GMSx_GMMPhotoFilterOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRestrictToDirectionsAppropriate; // @dynamic hasRestrictToDirectionsAppropriate;
@property(nonatomic) _Bool hasRestrictToOwnerAttributedPhotos; // @dynamic hasRestrictToOwnerAttributedPhotos;
@property(nonatomic) _Bool hasRestrictToVisitorAttributedPhotos; // @dynamic hasRestrictToVisitorAttributedPhotos;
@property(nonatomic) _Bool hasSemanticRestrictions; // @dynamic hasSemanticRestrictions;
@property(nonatomic) _Bool restrictToDirectionsAppropriate; // @dynamic restrictToDirectionsAppropriate;
@property(nonatomic) _Bool restrictToOwnerAttributedPhotos; // @dynamic restrictToOwnerAttributedPhotos;
@property(nonatomic) _Bool restrictToVisitorAttributedPhotos; // @dynamic restrictToVisitorAttributedPhotos;
@property(retain, nonatomic) GMSx_GMMImageSemanticRestrictions *semanticRestrictions; // @dynamic semanticRestrictions;

@end

