//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMGameAction, IESMMNetworkGamePlayer;

@interface IESMMGameCommand : NSObject
{
    IESMMNetworkGamePlayer *_player;
    IESMMGameAction *_action;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) IESMMGameAction *action; // @synthesize action=_action;
@property(retain, nonatomic) IESMMNetworkGamePlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPlayer:(id)arg1 action:(id)arg2;

@end

