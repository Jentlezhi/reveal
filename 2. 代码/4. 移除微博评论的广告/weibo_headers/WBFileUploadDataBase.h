//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface WBFileUploadDataBase : NSObject
{
    NSString *fileUrl;
    NSError *error;
    NSDictionary *paraDict;
    long long type;
    NSDictionary *httpExtraParaDict;
    long long _bytesPerSeg;
}

+ (Class)contextClass;
@property(nonatomic) long long bytesPerSeg; // @synthesize bytesPerSeg=_bytesPerSeg;
@property(retain, nonatomic) NSDictionary *httpExtraParaDict; // @synthesize httpExtraParaDict;
@property(nonatomic) long long type; // @synthesize type;
@property(retain, nonatomic) NSDictionary *paraDict; // @synthesize paraDict;
@property(retain, nonatomic) NSError *error; // @synthesize error;
@property(retain, nonatomic) NSString *fileUrl; // @synthesize fileUrl;
- (void).cxx_destruct;
- (id)dataDictionary;
- (id)initWithDataDictionary:(id)arg1;
- (void)dealloc;

@end

