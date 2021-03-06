/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand {
}

@property(copy) NSString * explicitUserPermission;
@property(copy) NSString * socialNetwork;

+ (id)getSocialCredential;
+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)explicitUserPermission;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (void)setExplicitUserPermission:(id)arg1;
- (void)setSocialNetwork:(id)arg1;
- (id)socialNetwork;

@end
