//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardAppearanceProviding.h"
#import "SBDashBoardBehaviorProviding.h"
#import "SBDashBoardEventHandling.h"
#import "SBDashBoardParticipating.h"
#import "SBDashBoardPresentationProviding.h"

@protocol SBDashBoardViewControlling <SBDashBoardAppearanceProviding, SBDashBoardBehaviorProviding, SBDashBoardPresentationProviding, SBDashBoardEventHandling, SBDashBoardParticipating>
@property(readonly, nonatomic) long long presentationAltitude;
@property(readonly, nonatomic) long long presentationPriority;
@property(readonly, nonatomic) long long presentationTransition;
@property(readonly, nonatomic) long long presentationType;
@property(readonly, nonatomic) long long presentationStyle;
@property(nonatomic) __weak id <SBDashBoardViewPresenting> presenter;
@end
