//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBModelObject.h"

@class NSString;

@interface WBStatusNumberDisplayStrategy : WBModelObject
{
    unsigned long long _applyScenarioFlag;
    long long _displayTextMinNumber;
    NSString *_displayText;
}

@property(retain, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(nonatomic) long long displayTextMinNumber; // @synthesize displayTextMinNumber=_displayTextMinNumber;
@property(nonatomic) unsigned long long applyScenarioFlag; // @synthesize applyScenarioFlag=_applyScenarioFlag;
- (void).cxx_destruct;
- (id)toJSONDictionary;
- (_Bool)updateWithJSONDictionary:(id)arg1;
- (_Bool)updateWithDictionary:(id)arg1;

@end

