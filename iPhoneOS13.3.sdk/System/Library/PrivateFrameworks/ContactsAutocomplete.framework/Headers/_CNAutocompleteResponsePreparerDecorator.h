//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsAutocomplete/CNAutocompleteQueryResponsePreparer.h>

@interface _CNAutocompleteResponsePreparerDecorator : CNAutocompleteQueryResponsePreparer
{
    CNAutocompleteQueryResponsePreparer *_preparer;
}

@property(readonly) CNAutocompleteQueryResponsePreparer *preparer; // @synthesize preparer=_preparer;
// - (void).cxx_destruct;
- (void)setMatchingPriorityResultsPromise:(id)arg1;
- (void)setPriorityResultsFuture:(id)arg1;
- (id)prepareResults:(id)arg1;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2;

@end
