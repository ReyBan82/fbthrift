/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.complex_struct;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;

@SwiftGenerated
@ThriftStruct("optXcep")
public final class OptXcep extends java.lang.Exception {
    private static final long serialVersionUID = 1L;

    @ThriftConstructor
    public OptXcep(
        @ThriftField(value=1, name="message", requiredness=Requiredness.OPTIONAL) final String message,
        @ThriftField(value=2, name="errorCode", requiredness=Requiredness.OPTIONAL) final Integer errorCode
    ) {
        this.message = message;
        this.errorCode = errorCode;
    }
    
    @ThriftConstructor
    protected OptXcep() {
      this.message = null;
      this.errorCode = null;
    }
    
    public static class Builder {
        private String message;
        @ThriftField(value=1, name="message", requiredness=Requiredness.OPTIONAL)
        public Builder setMessage(String message) {
            this.message = message;
            return this;
        }
        private Integer errorCode;
        @ThriftField(value=2, name="errorCode", requiredness=Requiredness.OPTIONAL)
        public Builder setErrorCode(Integer errorCode) {
            this.errorCode = errorCode;
            return this;
        }
    
        public Builder() { }
        public Builder(OptXcep other) {
            this.message = other.message;
            this.errorCode = other.errorCode;
        }
    
        @ThriftConstructor
        public OptXcep build() {
            return new OptXcep (
                this.message,
                this.errorCode
            );
        }
    }
    
    private final String message;
    private final Integer errorCode;

    
    @ThriftField(value=1, name="message", requiredness=Requiredness.OPTIONAL)
    public String getMessage() { return message; }
        
    @ThriftField(value=2, name="errorCode", requiredness=Requiredness.OPTIONAL)
    public Integer getErrorCode() { return errorCode; }
    }
