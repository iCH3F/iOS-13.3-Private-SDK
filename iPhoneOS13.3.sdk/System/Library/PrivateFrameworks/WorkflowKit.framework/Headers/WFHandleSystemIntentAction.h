//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFHandleIntentAction.h>

#import <WorkflowKit/WFDynamicEnumerationDataSource-Protocol.h>

@class INIntentDescription, NSArray;

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource>
{
    int _token;
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
    NSArray *_supportedIdentifiers;
}

@property(readonly, nonatomic) int token; // @synthesize token=_token;
- (id)intentDescription;
// - (void).cxx_destruct;
- (id)enumeration:(id)arg1 localizedLabelForPossibleState:(id)arg2;
- (id)possibleStatesForEnumeration:(id)arg1;
- (id)generatedIntentWithInput:(id)arg1 error:(id )arg2;
- (id)slots;
- (id)copyWithSerializedParameters:(id)arg1;
- (id)appSection;
- (void)selectedAppDidChange;
- (BOOL)setParameterState:(id)arg1 forKey:(id)arg2;
- (id)actionForAppIdentifier:(id)arg1;
- (id)supportedAppIdentifiers;
@property(readonly, nonatomic) NSArray *supportedIdentifiers; // @synthesize supportedIdentifiers=_supportedIdentifiers;
- (long long)intentCategory;
- (id)appIdentifier;
- (id)appIdentifierForIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

