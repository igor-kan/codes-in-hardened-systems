"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1096."""

def spec_graphene_hardened_malloc_1096() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1096, "quarantine_slabs": 9, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1096():
    s = spec_graphene_hardened_malloc_1096()
    assert s["spec_id"] == 1096
