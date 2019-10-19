//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTExplicitContentAccessManager, SPTPlayer, SPTPlaylistExtender, SPTPlaylistExtenderModel, SPTPlaylistExtenderModelDelegate, SPTPlaylistExtenderModelEvent, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@protocol SPTPlaylistExtenderModelEffectLoop <NSObject>
@property(retain, nonatomic) id subscriptionToken;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager;
@property(readonly, nonatomic) id <SPTPlayer> player;
@property(readonly, nonatomic) __weak id <SPTPlaylistExtenderModel> model;
@property(readonly, nonatomic) __weak id <SPTPlaylistExtenderModelDelegate> delegate;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel;
@property(readonly, nonatomic) id <SPTPlaylistExtender> playlistExtender;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader;
- (void)pushEvent:(id <SPTPlaylistExtenderModelEvent>)arg1;
@end
