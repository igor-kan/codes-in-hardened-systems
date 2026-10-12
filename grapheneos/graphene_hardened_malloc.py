"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 34."""

def spec_graphene_hardened_malloc_34() -> dict:
    return {"system": "GrapheneOS", "spec_id": 34, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_34():
    s = spec_graphene_hardened_malloc_34()
    assert s["spec_id"] == 34
