//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@class ICAction, NSArray;

@interface WFInterchangeAction : WFAction
{
    ICAction *_interchangeAction;
    NSArray *_contentClasses;
}

@property(retain, nonatomic) NSArray *contentClasses; // @synthesize contentClasses=_contentClasses;
@property(readonly, nonatomic) ICAction *interchangeAction; // @synthesize interchangeAction=_interchangeAction;
// - (void).cxx_destruct;
- (void)performActionWithInput:(id)arg1 parameters:(id)arg2 userInterface:(id)arg3 successHandler:(id /* CDUnknownBlockType */)arg4 errorHandler:(id /* CDUnknownBlockType */)arg5;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (BOOL)skipsProcessingHiddenParameters;
- (id)unsupportedEnvironments;
- (BOOL)mappedValueIsTrue:(id)arg1 forContentMapping:(id)arg2;
- (BOOL)callbackIsCurrentlyDisabled;
- (BOOL)shouldSuppressCallback;
@property(readonly, nonatomic) BOOL requiresCallback;
- (BOOL)neverSuggested;
- (BOOL)outputsMultipleItems;
- (BOOL)inputsMultipleItems;
- (id)outputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)inputContentClasses;
- (id)specifiedInputContentClasses;
- (id)inputParameterKey;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)app;
- (id)userInterfaceTypes;
- (id)requiredResources;
- (BOOL)isDiscontinued;
- (id)lastModifiedDate;
- (id)creationDate;
- (id)keywords;
- (id)descriptionDictionary;
- (id)subcategoryForCategory:(id)arg1;
- (id)categories;
- (id)parameterSummary;
- (id)shortName;
- (id)name;
- (id)description;
- (id)initWithInterchangeAction:(id)arg1 identifier:(id)arg2 definition:(id)arg3 serializedParameters:(id)arg4;
- (id)initWithInterchangeAction:(id)arg1 serializedParameters:(id)arg2;
- (id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3;

@end

