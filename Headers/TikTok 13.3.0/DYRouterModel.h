//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYASecurityTicketModel, DYPhoneNumberModel;

@interface DYRouterModel : NSObject
{
    unsigned long long _backStrategy;
    DYPhoneNumberModel *_phoneContext;
    unsigned long long _platformContext;
    unsigned long long _bindStrategy;
    DYASecurityTicketModel *_ticketModel;
}

+ (id)instanceWithBackStrategy:(unsigned long long)arg1 bindStrategy:(unsigned long long)arg2 platformContext:(unsigned long long)arg3 phoneContext:(id)arg4 ticketModel:(id)arg5;
+ (id)instanceWithBackStrategy:(unsigned long long)arg1 platformContext:(unsigned long long)arg2 bindStrategy:(unsigned long long)arg3 ticketModel:(id)arg4;
+ (id)instanceWithBackStrategy:(unsigned long long)arg1 bindStrategy:(unsigned long long)arg2 ticketModel:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg1 platformContext:(unsigned long long)arg2 ticketModel:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg1 phoneContext:(id)arg2 ticketModel:(id)arg3;
+ (id)instanceWithBackStrategy:(unsigned long long)arg1 ticketModel:(id)arg2;
@property(retain, nonatomic) DYASecurityTicketModel *ticketModel; // @synthesize ticketModel=_ticketModel;
@property(nonatomic) unsigned long long bindStrategy; // @synthesize bindStrategy=_bindStrategy;
@property(nonatomic) unsigned long long platformContext; // @synthesize platformContext=_platformContext;
@property(retain, nonatomic) DYPhoneNumberModel *phoneContext; // @synthesize phoneContext=_phoneContext;
@property(nonatomic) unsigned long long backStrategy; // @synthesize backStrategy=_backStrategy;
- (void).cxx_destruct;

@end

