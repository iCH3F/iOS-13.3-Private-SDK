//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HDFitnessMachinePairingManager, HDFitnessMachineSession, HDHealthServiceOOBInfo, HKHealthService, NSError;

@protocol HDFitnessMachinePairingManagerDelegate
- (void)pairingManagerDidBeginPairing:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManagerReadyToConnect:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 discoveredHealthService:(HKHealthService *)arg2 machineType:(NSUInteger)arg3;
- (void)pairingManagerReceivedActivityTypeAndPermission:(HDFitnessMachinePairingManager *)arg1;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 updatedConnectionStateFromState:(NSUInteger)arg2 toState:(NSUInteger)arg3;
- (void)pairingManagerUpdatedMachineInformation:(HDFitnessMachinePairingManager *)arg1;
- (HDHealthServiceOOBInfo *)pairingManagerRequestsOOBData:(HDFitnessMachinePairingManager *)arg1 error:(id )arg2;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 didChangeNFCEnabledState:(BOOL)arg2;
- (void)pairingManager:(HDFitnessMachinePairingManager *)arg1 failedPairingWithError:(NSError *)arg2;
- (void)pairingManagerWillBeginPairing:(HDFitnessMachinePairingManager *)arg1 fitnessMachineToken:(HDFitnessMachineSession *)arg2;
@end

