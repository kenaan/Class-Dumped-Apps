//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMPostContributionAction_DismissAction, GMSx_GMMPostContributionAction_IntentAction, GMSx_GMMPostContributionAction_LocalGuidesOptInAction, GMSx_GMMPostContributionAction_OpenYourContributionAction, GMSx_GMMPostContributionAction_ShareContributionAction;

@interface GMSx_GMMPostContributionAction : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int actionOneOfCase; // @dynamic actionOneOfCase;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_DismissAction *dismissAction; // @dynamic dismissAction;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_IntentAction *intentAction; // @dynamic intentAction;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_LocalGuidesOptInAction *localGuidesOptInAction; // @dynamic localGuidesOptInAction;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_OpenYourContributionAction *openYourContributionAction; // @dynamic openYourContributionAction;
@property(retain, nonatomic) GMSx_GMMPostContributionAction_ShareContributionAction *shareContributionAction; // @dynamic shareContributionAction;

@end

