//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

#import "SCTraceEnabled-Protocol.h"

@class NSString, SCApplicationStorageServices, SCIdentityLoggerServices, SCPostRegistrationScope, SCPostRegistrationWorkflow, SCScopeExposer, SCSystemScope, SCUserSessionScope;

@interface SCPostRegistrationEntryPoint : SCEntryPoint <SCTraceEnabled>
{
    SCPostRegistrationWorkflow *_workflow;
    SCSystemScope *_systemScope;
    SCApplicationStorageServices *_applicationStorageServices;
    SCUserSessionScope *_userSessionScope;
    SCPostRegistrationScope *_postRegistrationScope;
    SCIdentityLoggerServices *_identityLoggerServices;
    SCScopeExposer *_contactPermissionRequestScopeExposer;
    SCScopeExposer *_addFriendsScopeExposer;
}

@property(retain, nonatomic) SCScopeExposer *addFriendsScopeExposer; // @synthesize addFriendsScopeExposer=_addFriendsScopeExposer;
@property(retain, nonatomic) SCScopeExposer *contactPermissionRequestScopeExposer; // @synthesize contactPermissionRequestScopeExposer=_contactPermissionRequestScopeExposer;
@property(nonatomic) __weak SCIdentityLoggerServices *identityLoggerServices; // @synthesize identityLoggerServices=_identityLoggerServices;
@property(nonatomic) __weak SCPostRegistrationScope *postRegistrationScope; // @synthesize postRegistrationScope=_postRegistrationScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCApplicationStorageServices *applicationStorageServices; // @synthesize applicationStorageServices=_applicationStorageServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
- (void).cxx_destruct;
- (void)begin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

