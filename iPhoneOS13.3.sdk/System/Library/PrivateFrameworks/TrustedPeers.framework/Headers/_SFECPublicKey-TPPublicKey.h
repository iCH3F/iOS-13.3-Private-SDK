//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFECPublicKey.h>

#import <TrustedPeers/TPPublicKey-Protocol.h>

@interface _SFECPublicKey (TPPublicKey) <TPPublicKey>
- (BOOL)checkSignature:(id)arg1 matchesData:(id)arg2;
- (id)spki;
@end
