//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol ECMailAccount, ECMessage;

@protocol EDMessageDeliveryHookResponder <NSObject>
- (void)deliveredMessage:(id <ECMessage>)arg1 account:(id <ECMailAccount>)arg2;
@end

