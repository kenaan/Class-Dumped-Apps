//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WAUserDevicesSyncing;

@interface WADeviceManager : NSObject
{
    // Error parsing type: , name: syncManager
    // Error parsing type: , name: queue
    // Error parsing type: , name: chatStorage
    // Error parsing type: , name: contactsStorage
}

- (void).cxx_destruct;
- (id)init;
- (void)notificationReceivedWithOperation:(id)arg1;
- (void)syncFinishedWithResults:(id)arg1;
- (id)initWithChatStorage:(id)arg1 contactsStorage:(id)arg2 xmppConnection:(id)arg3;
@property(nonatomic) __weak id <WAUserDevicesSyncing> syncManager; // @synthesize syncManager;

@end
