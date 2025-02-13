//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KKViewElement.h"

@class NSArray, NSMutableArray;
@protocol KKSelectOption;

@interface KKSelectElement : KKViewElement
{
    NSMutableArray<KKSelectOption> *_options;
}

+ (void)setDefaultInputView:(id)arg1;
+ (id)defaultInputView;
+ (void)initialize;
@property(readonly, nonatomic) NSArray<KKSelectOption> *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)textView;
- (void)willRemoveChildren:(id)arg1;
- (void)didAddChildren:(id)arg1;
- (id)init;

@end

