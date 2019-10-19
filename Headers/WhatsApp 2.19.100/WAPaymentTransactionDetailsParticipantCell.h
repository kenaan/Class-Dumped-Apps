//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "WAPaymentTransactionDetailsCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, WAPaymentBaseTransaction;
@protocol WAPaymentTransactionDetailsDelegate;

@interface WAPaymentTransactionDetailsParticipantCell : UITableViewCell <WAPaymentTransactionDetailsCellProtocol>
{
    _Bool _loading;
    WAPaymentBaseTransaction *_transaction;
    id <WAPaymentTransactionDetailsDelegate> _delegate;
    UIImageView *_pictureView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_dateLabel;
}

@property(nonatomic) __weak UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *pictureView; // @synthesize pictureView=_pictureView;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak id <WAPaymentTransactionDetailsDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAPaymentBaseTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)popupActions;
- (void)handleSelection;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
