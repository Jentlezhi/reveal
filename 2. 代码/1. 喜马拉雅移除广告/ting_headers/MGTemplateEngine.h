//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol MGTemplateEngineDelegate, MGTemplateEngineMatcher;

@interface MGTemplateEngine : NSObject
{
    NSMutableArray *_openBlocksStack;
    NSMutableDictionary *_globals;
    long long _outputDisabledCount;
    unsigned long long _templateLength;
    NSMutableDictionary *_filters;
    NSMutableDictionary *_markers;
    NSMutableDictionary *_templateVariables;
    _Bool _literal;
    NSString *_markerStartDelimiter;
    NSString *_markerEndDelimiter;
    NSString *_expressionStartDelimiter;
    NSString *_expressionEndDelimiter;
    NSString *_filterDelimiter;
    NSString *_literalStartMarker;
    NSString *_literalEndMarker;
    id <MGTemplateEngineDelegate> _delegate;
    id <MGTemplateEngineMatcher> _matcher;
    NSString *_templateContents;
    struct _NSRange _remainingRange;
}

+ (id)templateEngine;
+ (id)engineVersion;
@property(readonly) NSString *templateContents; // @synthesize templateContents=_templateContents;
@property(retain) id <MGTemplateEngineMatcher> matcher; // @synthesize matcher=_matcher;
@property __weak id <MGTemplateEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) struct _NSRange remainingRange; // @synthesize remainingRange=_remainingRange;
@property(retain) NSString *literalEndMarker; // @synthesize literalEndMarker=_literalEndMarker;
@property(retain) NSString *literalStartMarker; // @synthesize literalStartMarker=_literalStartMarker;
@property(retain) NSString *filterDelimiter; // @synthesize filterDelimiter=_filterDelimiter;
@property(retain) NSString *expressionEndDelimiter; // @synthesize expressionEndDelimiter=_expressionEndDelimiter;
@property(retain) NSString *expressionStartDelimiter; // @synthesize expressionStartDelimiter=_expressionStartDelimiter;
@property(retain) NSString *markerEndDelimiter; // @synthesize markerEndDelimiter=_markerEndDelimiter;
@property(retain) NSString *markerStartDelimiter; // @synthesize markerStartDelimiter=_markerStartDelimiter;
- (void).cxx_destruct;
- (id)processTemplateInFileAtPath:(id)arg1 withVariables:(id)arg2;
- (id)processTemplate:(id)arg1 withVariables:(id)arg2;
- (id)templateVariables;
- (id)resolveVariable:(id)arg1;
- (void)setValue:(id)arg1 forVariable:(id)arg2 forceCurrentStackFrame:(_Bool)arg3;
- (id)valueForVariable:(id)arg1 parent:(id *)arg2 parentKey:(id *)arg3;
- (void)reportTemplateProcessingFinished;
- (void)reportBlockBoundaryStarted:(_Bool)arg1;
- (void)reportError:(id)arg1 code:(long long)arg2 continuing:(_Bool)arg3;
- (void)loadFilter:(id)arg1;
- (void)loadMarker:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

